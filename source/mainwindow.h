#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "generalchart.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ExternalRepaymentRB_toggled(bool checked);

    void on_ExternalVolumeRB_toggled(bool checked);

    void on_ExternalVolumeFromMonthCmBx_currentIndexChanged(int index);

    void on_ExternalVolumeToMonthCmBx_currentIndexChanged(int index);

    void on_ExternalVolumeFromYearCmBx_currentIndexChanged(const QString &arg1);

    void on_ExternalVolumeToYearCmBx_currentIndexChanged(const QString &arg1);

    void on_InternalVolumeFromMonthCmBx_currentIndexChanged(int index);

    void on_InternalVolumeFromYearCmBx_currentIndexChanged(const QString &arg1);

    void on_InternalVolumeToMonthCmBx_currentIndexChanged(int index);

    void on_InternalVolumeToYearCmBx_currentIndexChanged(const QString &arg1);

    void on_InternalRepaymentRB_toggled(bool checked);

    void on_InternalVolumeRB_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    GeneralChart *ExternalVolumeChart;
    GeneralChart *InternalVolumeChart;
    GeneralChart *ExternalRepaymentChart;
    GeneralChart *InternalRepaymentChart;
};

#endif // MAINWINDOW_H
