#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow main_window;
	main_window.resize(1600, 800);
    main_window.show();
    return app.exec();
}
