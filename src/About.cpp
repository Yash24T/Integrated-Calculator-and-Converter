#include "About.h"

About::About(QWidget* parent):
    QDialog(parent)
{
    pAboutLabel = new QLabel(tr("This is a Solver Application, solve equations and numericals easily with our solver application. This Application provides GUI interface to perform mathematical operations, the GUI interface is made using QT tool chain."));
    pAboutLabel -> setWordWrap(true);
    pAboutLabel -> setFrameStyle(QFrame::Panel);

    pLayout = new QVBoxLayout;
    pLayout -> addWidget(pAboutLabel);

    setLayout(pLayout);
    setWindowTitle(tr("About"));

    setMaximumSize(200, 200);
}
