#include "crt_data.h"
#include <QDebug>

QSqlDatabase crt_data::db = QSqlDatabase::addDatabase("QMYSQL");

crt_data::crt_data(VRType TChart, EIType TDebt)
    : ChartType(TChart)
    , DebtType(TDebt)
{
    db.setHostName("localhost");
    db.setDatabaseName("debt");
	db.setUserName("root");
	db.setPassword("FORMALDEGID");
    db.open();
    if (DebtType == crt_data::External)
    {
		debt_table = "external_debt";
        ValueContent = "usd";
    }
    else
    {
        debt_table = "internal_debt";
        ValueContent = "billion_roubles";
    }
}

void crt_data::SetFromMonth(int month)
{
    MonthFrom = month + 1;
    DateFrom = FormDate(YearFrom, MonthFrom);
}

void crt_data::SetToMonth(int month)
{
    MonthTo = month + 1;
    DateTo = FormDate(YearTo, MonthTo);
}

void crt_data::SetFromYear(int year)
{
    YearFrom = year;
    DateFrom = FormDate(YearFrom, MonthFrom);
}

void crt_data::SetToYear(int year)
{
    YearTo = year;
    DateTo = FormDate(YearTo, MonthTo);
}

QString crt_data::FormDate(int year, int month)
{
    QString smonth = QVariant(month).toString();
    if (month < 10)
        smonth = "0" + smonth;
    return(QVariant(year).toString() + "-" + smonth + "-01");
}

bool crt_data::NextSet()
{
    bool ok = (CountSet != 0);
    if (ok)
    {
        int tmp = CountSet;
		query.prepare("select distinct(type) from " + debt_table + " where month between :datefrom and :dateto;");
        query.bindValue(":datefrom", DateFrom);
        query.bindValue(":dateto", DateTo);
        query.exec();
        while (tmp--)
			query.next();
		TypeSet = query.value(0).toString();
    }
    CountSet--;
    query.finish();
	qDebug() << query.prepare("select "+ ValueContent + ", month from " + debt_table + " where month between :datefrom and :dateto and type=:typeset order by month;");
    query.bindValue(":datefrom", DateFrom);
    query.bindValue(":dateto", DateTo);
	qDebug() << "TS: " << TypeSet;
	qDebug() << "DF: " << DateFrom;
	qDebug() << "DT: " << DateTo;
    query.bindValue(":typeset", TypeSet);
    query.exec();
    return (ok);
}

void crt_data::Recalculate()
{
	query.prepare("select count(distinct(type)) from " + debt_table + " where month between :datefrom and :dateto;");
	query.bindValue(":datefrom", DateFrom);
	query.bindValue(":dateto", DateTo);
    query.exec();
	query.next();
	CountSet = query.value(0).toInt();
    query.finish();
}

QString crt_data::TakeTypeSet()
{
    return(TypeSet);
}

bool crt_data::SetHaveValue()
{
    bool ok = query.next();
    if (!ok)
    {
        query.finish();
    }
    return(ok);
}

double crt_data::TakeCurrentValue()
{
    return(query.value(query.record().indexOf(ValueContent)).toDouble());
}

QString crt_data::TakeCategories()
{
    QString ret = query.value(query.record().indexOf("month")).toString();
    ret.truncate(7);
    return(ret);
}
