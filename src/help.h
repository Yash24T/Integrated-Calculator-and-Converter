#ifndef HELP_H
#define HELP_H

#include <QDialog>
#include <QObject>
#include <QLabel>
#include <QVBoxLayout>
class Help : public QDialog
{
    Q_OBJECT
public:
    Help(QWidget* parent = nullptr);

private:
    QLabel* pLabel1;
    QLabel* pLabel2;
    QLabel* pLabel3;
    QLabel* pLabel4;

    QVBoxLayout* pLayout;
};

#endif // HELP_H
