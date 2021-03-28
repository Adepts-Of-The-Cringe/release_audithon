#ifndef CRT_DATA_H
#define CRT_DATA_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant>

class crt_data
{
public:
    enum VRType
    {
        Volume = 0,
        Repayment
    };
    enum EIType
    {
        External = 0,
        Internal
    };
public:
    explicit crt_data(VRType TChart = Volume, EIType TDebt = External);
    void SetFromMonth(int month);
    void SetToMonth(int month);
    void SetFromYear(int year);
    void SetToYear(int year);
    QString FormDate(int year, int month);
    void Recalculate();
    bool NextSet();
    QString TakeTypeSet();
    bool SetHaveValue();
    double TakeCurrentValue();
    QString TakeCategories();
    const VRType ChartType;
    const EIType DebtType;

private:
    static QSqlDatabase db;
    QSqlQuery query;
    QString DateFrom;
    QString DateTo;
    QString TypeSet;
    QString debt_table;
    QString ValueContent;
    int MonthFrom;
    int MonthTo;
    int YearFrom;
    int YearTo;
    int CountSet;
};

#endif // CRT_DATA_H
