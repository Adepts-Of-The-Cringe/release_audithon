/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QtCharts"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *ExternalTab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *ExternalTopLayout;
    QRadioButton *ExternalVolumeRB;
    QRadioButton *ExternalRepaymentRB;
    QHBoxLayout *ExternalMainLayout;
    QGroupBox *ExternalVolumeGrBx;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *ExternalVolumeTopLayout;
    QLabel *ExternalVolumeFromLabel;
    QComboBox *ExternalVolumeFromMonthCmBx;
    QComboBox *ExternalVolumeFromYearCmBx;
    QLabel *ExternalVolumeToLabel;
    QComboBox *ExternalVolumeToMonthCmBx;
    QComboBox *ExternalVolumeToYearCmBx;
    QHBoxLayout *ExternalVolumeMainLayout;
    QGroupBox *ExternalVolumeChartGrBx;
    QGridLayout *gridLayout_2;
    QChartView *ExternalVolumeChartView;
    QGroupBox *ExternalVolumeInfoGrBx;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *ExternalRepaymentGrBx;
    QHBoxLayout *horizontalLayout_2;
    QChartView *ExternalRepaymentChartView;
    QCalendarWidget *ExternalRepaymentCalendar;
    QWidget *InternalTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *InternalTopLayout;
    QRadioButton *InternalVolumeRB;
    QRadioButton *InternalRepaymentRB;
    QHBoxLayout *InternalMainLayout;
    QGroupBox *InternalVolumeGrBx;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *InternalVolumeTopLayout;
    QLabel *InternalVolumeFromLabel;
    QComboBox *InternalVolumeFromMonthCmBx;
    QComboBox *InternalVolumeFromYearCmBx;
    QLabel *InternalVolumeToLabel;
    QComboBox *InternalVolumeToMonthCmBx;
    QComboBox *InternalVolumeToYearCmBx;
    QHBoxLayout *InternalVolumeMainLayout;
    QGroupBox *InternalVolumeChartGrBx;
    QGridLayout *gridLayout_5;
    QChartView *InternalVolumeChartView;
    QGroupBox *InternalVolumeInfoGrBx;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *InternalRepaymentGrBx;
    QHBoxLayout *horizontalLayout_5;
    QChartView *InternalRepaymentChartView;
    QCalendarWidget *InternalRepaymentCalendar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1390, 444);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        ExternalTab = new QWidget();
        ExternalTab->setObjectName(QString::fromUtf8("ExternalTab"));
        ExternalTab->setEnabled(true);
        verticalLayout_5 = new QVBoxLayout(ExternalTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ExternalTopLayout = new QHBoxLayout();
        ExternalTopLayout->setObjectName(QString::fromUtf8("ExternalTopLayout"));
        ExternalVolumeRB = new QRadioButton(ExternalTab);
        ExternalVolumeRB->setObjectName(QString::fromUtf8("ExternalVolumeRB"));
        ExternalVolumeRB->setChecked(true);

        ExternalTopLayout->addWidget(ExternalVolumeRB);

        ExternalRepaymentRB = new QRadioButton(ExternalTab);
        ExternalRepaymentRB->setObjectName(QString::fromUtf8("ExternalRepaymentRB"));

        ExternalTopLayout->addWidget(ExternalRepaymentRB);


        verticalLayout_5->addLayout(ExternalTopLayout);

        ExternalMainLayout = new QHBoxLayout();
        ExternalMainLayout->setObjectName(QString::fromUtf8("ExternalMainLayout"));
        ExternalVolumeGrBx = new QGroupBox(ExternalTab);
        ExternalVolumeGrBx->setObjectName(QString::fromUtf8("ExternalVolumeGrBx"));
        ExternalVolumeGrBx->setEnabled(true);
        ExternalVolumeGrBx->setFlat(true);
        verticalLayout_6 = new QVBoxLayout(ExternalVolumeGrBx);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        ExternalVolumeTopLayout = new QHBoxLayout();
        ExternalVolumeTopLayout->setObjectName(QString::fromUtf8("ExternalVolumeTopLayout"));
        ExternalVolumeFromLabel = new QLabel(ExternalVolumeGrBx);
        ExternalVolumeFromLabel->setObjectName(QString::fromUtf8("ExternalVolumeFromLabel"));
        ExternalVolumeFromLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        ExternalVolumeTopLayout->addWidget(ExternalVolumeFromLabel);

        ExternalVolumeFromMonthCmBx = new QComboBox(ExternalVolumeGrBx);
        ExternalVolumeFromMonthCmBx->setObjectName(QString::fromUtf8("ExternalVolumeFromMonthCmBx"));
        ExternalVolumeFromMonthCmBx->setMaxVisibleItems(12);

        ExternalVolumeTopLayout->addWidget(ExternalVolumeFromMonthCmBx);

        ExternalVolumeFromYearCmBx = new QComboBox(ExternalVolumeGrBx);
        ExternalVolumeFromYearCmBx->setObjectName(QString::fromUtf8("ExternalVolumeFromYearCmBx"));

        ExternalVolumeTopLayout->addWidget(ExternalVolumeFromYearCmBx);

        ExternalVolumeToLabel = new QLabel(ExternalVolumeGrBx);
        ExternalVolumeToLabel->setObjectName(QString::fromUtf8("ExternalVolumeToLabel"));
        ExternalVolumeToLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        ExternalVolumeTopLayout->addWidget(ExternalVolumeToLabel);

        ExternalVolumeToMonthCmBx = new QComboBox(ExternalVolumeGrBx);
        ExternalVolumeToMonthCmBx->setObjectName(QString::fromUtf8("ExternalVolumeToMonthCmBx"));
        ExternalVolumeToMonthCmBx->setMaxVisibleItems(12);

        ExternalVolumeTopLayout->addWidget(ExternalVolumeToMonthCmBx);

        ExternalVolumeToYearCmBx = new QComboBox(ExternalVolumeGrBx);
        ExternalVolumeToYearCmBx->setObjectName(QString::fromUtf8("ExternalVolumeToYearCmBx"));

        ExternalVolumeTopLayout->addWidget(ExternalVolumeToYearCmBx);


        verticalLayout_6->addLayout(ExternalVolumeTopLayout);

        ExternalVolumeMainLayout = new QHBoxLayout();
        ExternalVolumeMainLayout->setObjectName(QString::fromUtf8("ExternalVolumeMainLayout"));
        ExternalVolumeChartGrBx = new QGroupBox(ExternalVolumeGrBx);
        ExternalVolumeChartGrBx->setObjectName(QString::fromUtf8("ExternalVolumeChartGrBx"));
        gridLayout_2 = new QGridLayout(ExternalVolumeChartGrBx);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ExternalVolumeChartView = new QChartView(ExternalVolumeChartGrBx);
        ExternalVolumeChartView->setObjectName(QString::fromUtf8("ExternalVolumeChartView"));

        gridLayout_2->addWidget(ExternalVolumeChartView, 0, 0, 1, 1);


        ExternalVolumeMainLayout->addWidget(ExternalVolumeChartGrBx);

        ExternalVolumeInfoGrBx = new QGroupBox(ExternalVolumeGrBx);
        ExternalVolumeInfoGrBx->setObjectName(QString::fromUtf8("ExternalVolumeInfoGrBx"));
        verticalLayout_7 = new QVBoxLayout(ExternalVolumeInfoGrBx);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        ExternalVolumeMainLayout->addWidget(ExternalVolumeInfoGrBx);


        verticalLayout_6->addLayout(ExternalVolumeMainLayout);


        ExternalMainLayout->addWidget(ExternalVolumeGrBx);

        ExternalRepaymentGrBx = new QGroupBox(ExternalTab);
        ExternalRepaymentGrBx->setObjectName(QString::fromUtf8("ExternalRepaymentGrBx"));
        horizontalLayout_2 = new QHBoxLayout(ExternalRepaymentGrBx);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ExternalRepaymentChartView = new QChartView(ExternalRepaymentGrBx);
        ExternalRepaymentChartView->setObjectName(QString::fromUtf8("ExternalRepaymentChartView"));

        horizontalLayout_2->addWidget(ExternalRepaymentChartView);

        ExternalRepaymentCalendar = new QCalendarWidget(ExternalRepaymentGrBx);
        ExternalRepaymentCalendar->setObjectName(QString::fromUtf8("ExternalRepaymentCalendar"));

        horizontalLayout_2->addWidget(ExternalRepaymentCalendar);


        ExternalMainLayout->addWidget(ExternalRepaymentGrBx);


        verticalLayout_5->addLayout(ExternalMainLayout);

        tabWidget->addTab(ExternalTab, QString());
        InternalTab = new QWidget();
        InternalTab->setObjectName(QString::fromUtf8("InternalTab"));
        verticalLayout_3 = new QVBoxLayout(InternalTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        InternalTopLayout = new QHBoxLayout();
        InternalTopLayout->setObjectName(QString::fromUtf8("InternalTopLayout"));
        InternalVolumeRB = new QRadioButton(InternalTab);
        InternalVolumeRB->setObjectName(QString::fromUtf8("InternalVolumeRB"));
        InternalVolumeRB->setChecked(true);

        InternalTopLayout->addWidget(InternalVolumeRB);

        InternalRepaymentRB = new QRadioButton(InternalTab);
        InternalRepaymentRB->setObjectName(QString::fromUtf8("InternalRepaymentRB"));

        InternalTopLayout->addWidget(InternalRepaymentRB);


        verticalLayout_3->addLayout(InternalTopLayout);

        InternalMainLayout = new QHBoxLayout();
        InternalMainLayout->setObjectName(QString::fromUtf8("InternalMainLayout"));
        InternalVolumeGrBx = new QGroupBox(InternalTab);
        InternalVolumeGrBx->setObjectName(QString::fromUtf8("InternalVolumeGrBx"));
        InternalVolumeGrBx->setEnabled(true);
        InternalVolumeGrBx->setFlat(true);
        verticalLayout_13 = new QVBoxLayout(InternalVolumeGrBx);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        InternalVolumeTopLayout = new QHBoxLayout();
        InternalVolumeTopLayout->setObjectName(QString::fromUtf8("InternalVolumeTopLayout"));
        InternalVolumeFromLabel = new QLabel(InternalVolumeGrBx);
        InternalVolumeFromLabel->setObjectName(QString::fromUtf8("InternalVolumeFromLabel"));
        InternalVolumeFromLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        InternalVolumeTopLayout->addWidget(InternalVolumeFromLabel);

        InternalVolumeFromMonthCmBx = new QComboBox(InternalVolumeGrBx);
        InternalVolumeFromMonthCmBx->setObjectName(QString::fromUtf8("InternalVolumeFromMonthCmBx"));
        InternalVolumeFromMonthCmBx->setMaxVisibleItems(12);

        InternalVolumeTopLayout->addWidget(InternalVolumeFromMonthCmBx);

        InternalVolumeFromYearCmBx = new QComboBox(InternalVolumeGrBx);
        InternalVolumeFromYearCmBx->setObjectName(QString::fromUtf8("InternalVolumeFromYearCmBx"));

        InternalVolumeTopLayout->addWidget(InternalVolumeFromYearCmBx);

        InternalVolumeToLabel = new QLabel(InternalVolumeGrBx);
        InternalVolumeToLabel->setObjectName(QString::fromUtf8("InternalVolumeToLabel"));
        InternalVolumeToLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        InternalVolumeTopLayout->addWidget(InternalVolumeToLabel);

        InternalVolumeToMonthCmBx = new QComboBox(InternalVolumeGrBx);
        InternalVolumeToMonthCmBx->setObjectName(QString::fromUtf8("InternalVolumeToMonthCmBx"));
        InternalVolumeToMonthCmBx->setMaxVisibleItems(12);

        InternalVolumeTopLayout->addWidget(InternalVolumeToMonthCmBx);

        InternalVolumeToYearCmBx = new QComboBox(InternalVolumeGrBx);
        InternalVolumeToYearCmBx->setObjectName(QString::fromUtf8("InternalVolumeToYearCmBx"));

        InternalVolumeTopLayout->addWidget(InternalVolumeToYearCmBx);


        verticalLayout_13->addLayout(InternalVolumeTopLayout);

        InternalVolumeMainLayout = new QHBoxLayout();
        InternalVolumeMainLayout->setObjectName(QString::fromUtf8("InternalVolumeMainLayout"));
        InternalVolumeChartGrBx = new QGroupBox(InternalVolumeGrBx);
        InternalVolumeChartGrBx->setObjectName(QString::fromUtf8("InternalVolumeChartGrBx"));
        gridLayout_5 = new QGridLayout(InternalVolumeChartGrBx);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        InternalVolumeChartView = new QChartView(InternalVolumeChartGrBx);
        InternalVolumeChartView->setObjectName(QString::fromUtf8("InternalVolumeChartView"));

        gridLayout_5->addWidget(InternalVolumeChartView, 0, 0, 1, 1);


        InternalVolumeMainLayout->addWidget(InternalVolumeChartGrBx);

        InternalVolumeInfoGrBx = new QGroupBox(InternalVolumeGrBx);
        InternalVolumeInfoGrBx->setObjectName(QString::fromUtf8("InternalVolumeInfoGrBx"));
        verticalLayout_14 = new QVBoxLayout(InternalVolumeInfoGrBx);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));

        InternalVolumeMainLayout->addWidget(InternalVolumeInfoGrBx);


        verticalLayout_13->addLayout(InternalVolumeMainLayout);


        InternalMainLayout->addWidget(InternalVolumeGrBx);

        InternalRepaymentGrBx = new QGroupBox(InternalTab);
        InternalRepaymentGrBx->setObjectName(QString::fromUtf8("InternalRepaymentGrBx"));
        horizontalLayout_5 = new QHBoxLayout(InternalRepaymentGrBx);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        InternalRepaymentChartView = new QChartView(InternalRepaymentGrBx);
        InternalRepaymentChartView->setObjectName(QString::fromUtf8("InternalRepaymentChartView"));

        horizontalLayout_5->addWidget(InternalRepaymentChartView);

        InternalRepaymentCalendar = new QCalendarWidget(InternalRepaymentGrBx);
        InternalRepaymentCalendar->setObjectName(QString::fromUtf8("InternalRepaymentCalendar"));

        horizontalLayout_5->addWidget(InternalRepaymentCalendar);


        InternalMainLayout->addWidget(InternalRepaymentGrBx);


        verticalLayout_3->addLayout(InternalMainLayout);

        tabWidget->addTab(InternalTab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1390, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\"\320\222\320\270\320\223\320\276\320\224\"", nullptr));
        ExternalVolumeRB->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274 \320\270 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260", nullptr));
        ExternalRepaymentRB->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\320\263\320\260\321\210\320\265\320\275\320\270\321\217", nullptr));
        ExternalVolumeGrBx->setTitle(QString());
        ExternalVolumeFromLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\201:", nullptr));
        ExternalVolumeFromMonthCmBx->setCurrentText(QString());
        ExternalVolumeFromMonthCmBx->setPlaceholderText(QString());
        ExternalVolumeToLabel->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276:", nullptr));
        ExternalVolumeToMonthCmBx->setCurrentText(QString());
        ExternalVolumeToMonthCmBx->setPlaceholderText(QString());
        ExternalVolumeChartGrBx->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274", nullptr));
        ExternalVolumeInfoGrBx->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260", nullptr));
        ExternalRepaymentGrBx->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(ExternalTab), QCoreApplication::translate("MainWindow", "\320\222\320\275\320\265\321\210\320\275\320\270\320\271 \320\264\320\276\320\273\320\263", nullptr));
        InternalVolumeRB->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274 \320\270 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260", nullptr));
        InternalRepaymentRB->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\320\263\320\260\321\210\320\265\320\275\320\270\321\217", nullptr));
        InternalVolumeGrBx->setTitle(QString());
        InternalVolumeFromLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\201:", nullptr));
        InternalVolumeFromMonthCmBx->setCurrentText(QString());
        InternalVolumeFromMonthCmBx->setPlaceholderText(QString());
        InternalVolumeToLabel->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276:", nullptr));
        InternalVolumeToMonthCmBx->setCurrentText(QString());
        InternalVolumeToMonthCmBx->setPlaceholderText(QString());
        InternalVolumeChartGrBx->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274", nullptr));
        InternalVolumeInfoGrBx->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260", nullptr));
        InternalRepaymentGrBx->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(InternalTab), QCoreApplication::translate("MainWindow", "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\264\320\276\320\273\320\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
