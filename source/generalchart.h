#ifndef GENERALCHART_H
#define GENERALCHART_H

#include <QtCharts>
#include "crt_data.h"

using namespace QtCharts;

class GeneralChart : public QChart
{
    Q_OBJECT
public:
    GeneralChart(crt_data::VRType TChart, crt_data::EIType TDebt);
    ~GeneralChart();

public:
    void SetFromMonth(int month);
    void SetToMonth(int month);
    void SetFromYear(QString year);
    void SetToYear(QString year);
    void Redraw();

private:
    crt_data *chart_data;
    QBarCategoryAxis *axisX;
    QValueAxis *axisY;
    QStackedBarSeries *series;
    QVector<QBarSet*> StackBars;
};

#endif // GENERALCHART_H
