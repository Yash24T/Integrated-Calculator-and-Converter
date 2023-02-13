#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include <QObject>
#include <QVBoxLayout>
#include <QLabel>

class About : public QDialog
{
    Q_OBJECT
public:
    About(QWidget* parent = nullptr);

private:
    QLabel* pAboutLabel;
    QVBoxLayout* pLayout;
};

#endif // ABOUT_H
