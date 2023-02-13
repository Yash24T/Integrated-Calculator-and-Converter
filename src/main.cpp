#include <QApplication>
#include "standardwindowclass.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    StandardWindowClass dialog ;
    dialog.show();

    return app.exec();
}
