#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include <QDialog>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QButtonGroup>

#define METER       101
#define KILOMETER   102
#define CENTIMETER  103
#define MILLIMETER  104
#define MICROMETER  105
#define NANOMETER   106
#define MILE        107
#define YARD        108
#define FOOT        109
#define INCH        110
#define LIGHTYEAR   111

class LengthConverter : public QDialog
{
    Q_OBJECT
public:
    LengthConverter(QWidget* parent = nullptr);
    double Convert(int from, int to, double magnitude);

public slots:
    void TextChangedInputBox1(const QString& str);
    void DoCompute();
    void DoClear();

private:
    QLabel* pLabelTitle;
    QLabel* pLabelInfo;
    QLabel* pLabelTo;
    QLabel* pLabelFrom;

    QLineEdit* pInputBox1;
    QLineEdit* pOutputBox1;

    QPushButton* pEqualButton;
    QPushButton* pClear;
    QPushButton* pClose;

    QButtonGroup* pButtonGroup1;
    QButtonGroup* pButtonGroup2;

    QRadioButton* pMeter1;
    QRadioButton* pKiloMeter1;
    QRadioButton* pCentiMeter1;
    QRadioButton* pMilliMeter1;
    QRadioButton* pMicroMeter1;
    QRadioButton* pNanoMeter1;
    QRadioButton* pMile1;
    QRadioButton* pYard1;
    QRadioButton* pFoot1;
    QRadioButton* pInch1;
    QRadioButton* pLightYear1;

    QRadioButton* pMeter2;
    QRadioButton* pKiloMeter2;
    QRadioButton* pCentiMeter2;
    QRadioButton* pMilliMeter2;
    QRadioButton* pMicroMeter2;
    QRadioButton* pNanoMeter2;
    QRadioButton* pMile2;
    QRadioButton* pYard2;
    QRadioButton* pFoot2;
    QRadioButton* pInch2;
    QRadioButton* pLightYear2;

    QVBoxLayout* pRadioLayout1;
    QVBoxLayout* pRadioLayout2;
    QHBoxLayout* pRadioLayoutMain;

    QVBoxLayout* pFromLayout;
    QVBoxLayout* pToLayout;

    QHBoxLayout* pInputLayout;
    QHBoxLayout* pControlButton;

    QVBoxLayout* MainLayout;

    int to_choice;
    int from_choice;
    double to_lenght;
    double from_lenght;

    double meter_to_meter(double m);
    double meter_to_kilometer(double m);
    double meter_to_centimeter(double m);
    double meter_to_millimeter(double m);
    double meter_to_micrometer(double m);
    double meter_to_nanometer(double m);
    double meter_to_mile(double m);
    double meter_to_yard(double m);
    double meter_to_foot(double m);
    double meter_to_inch(double m);
    double meter_to_lightyear(double m);

    double kilometer_to_meter(double km);
    double centimeter_to_meter(double cm);
    double millimeter_to_meter(double mm);
    double micrometer_to_meter(double um);
    double nanometer_to_meter(double nm);
    double mile_to_meter(double mi);
    double yard_to_meter(double y);
    double foot_to_meter(double f);
    double inch_to_meter(double in);
    double lightyear_to_meter(double ly);
};

#endif // LENGTHCONVERTER_H
