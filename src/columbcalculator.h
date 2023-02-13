#ifndef COLUMBCALCULATOR_H
#define COLUMBCALCULATOR_H

#include <QDialog>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class columbcalculator : public QDialog
{
    Q_OBJECT
public:
    columbcalculator(QWidget* parent = nullptr);

public slots:
    void TextChangedLabel1(const QString& str);
    void TextChangedLabel2(const QString& str);
    void TextChangedLabel3(const QString& str);
    void DoCompute();

private:
    QLabel* pLabel1;
    QLabel* pLabel2;
    QLabel* pLabel3;
    QLabel* pLabel4;

    QLineEdit* pLineEdit1;
    QLineEdit* pLineEdit2;
    QLineEdit* pLineEdit3;

    QPushButton* pComputeButton;
    QPushButton* pCancelButton;

    QHBoxLayout* pEntry1;
    QHBoxLayout* pEntry2;
    QHBoxLayout* pEntry3;

    QVBoxLayout* pRightLayout;
    QVBoxLayout* pLeftLayout;

    QHBoxLayout* pMainLayout;

    double q1;
    double q2;
    double r;

};

#endif // COLUMBCALCULATOR_H
