#include "generalchart.h"

GeneralChart::GeneralChart(crt_data::VRType TChart, crt_data::EIType TDebt)
    : QChart()
    , chart_data(new crt_data(TChart, TDebt))
{
    if (chart_data->ChartType == crt_data::Volume)
    {
        axisX = new QBarCategoryAxis();
        this->addAxis(axisX, Qt::AlignBottom);
        axisY = new QValueAxis();
        this->addAxis(axisY, Qt::AlignLeft);
        series = new QStackedBarSeries();
        this->addSeries(series);
        series->attachAxis(axisX);
        series->attachAxis(axisY);
    }
}

GeneralChart::~GeneralChart()
{
}

void GeneralChart::SetFromMonth(int month)
{
    chart_data->SetFromMonth(month);
}

void GeneralChart::SetToMonth(int month)
{
    chart_data->SetToMonth(month);
}

void GeneralChart::SetFromYear(QString year)
{
    chart_data->SetFromYear(year.toInt());
}

void GeneralChart::SetToYear(QString year)
{
    chart_data->SetToYear(year.toInt());
}

void GeneralChart::Redraw()
{
    if (chart_data->ChartType == crt_data::Volume)
    {
        chart_data->Recalculate();
        QStringList categories;

        while (chart_data->NextSet())
        {
            QBarSet *NewSet = new QBarSet(chart_data->TakeTypeSet());
            while (chart_data->SetHaveValue())
            {
                *NewSet << chart_data->TakeCurrentValue();
                if (StackBars.isEmpty())
                {
                    categories << chart_data->TakeCategories();
                }
            }
            StackBars.push_back(NewSet);
        }
		qDebug() << "CAT: " << categories;
        series->clear();
        while (!StackBars.isEmpty())
        {
            series->append(StackBars.front());
            StackBars.pop_front();
        }
        axisX->clear();
        axisX->append(categories);
		axisY->setMax(chart_data->DebtType == crt_data::External ? 70000.0 : 15000.0);
        this->setAnimationOptions(QChart::SeriesAnimations);
        this->legend()->setVisible(true);
        this->legend()->setAlignment(Qt::AlignRight);
        this->setTheme(QChart::ChartThemeBlueCerulean);
    }
    else
    {
           QPieSeries *series2 = new QPieSeries();
           series2->append("Тип № 5", 10);
           series2->append("Тип № 4", 23);
           series2->append("Тип № 3", 19);
           series2->append("Тип № 2", 6);
           series2->append("Тип № 1", 40);
           QPieSlice *slice = series2->slices().at(1);
           slice->setExploded();
           slice->setLabelVisible();
           slice->setPen(QPen(Qt::darkGreen, 2));
           slice->setBrush(Qt::green);
           this->addSeries(series2);
           this->setTitle("График погашения на DD месяца YYYY");
           this->legend()->hide();
    }
}
