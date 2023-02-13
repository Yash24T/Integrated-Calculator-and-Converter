#ifndef CREDIT_H
#define CREDIT_H

#include <QDialog>
#include <QObject>
#include <QLabel>
#include <QVBoxLayout>

class Credit : public QDialog
{
    Q_OBJECT
public:
    Credit(QWidget* parent = nullptr);

private:
    QLabel* pMadebyLabel;
    QLabel* pGuidancebyLabel;
    QLabel* pMyName;
    QLabel* pSirName;

    QVBoxLayout* pLayout;
};

#endif // CREDIT_H
