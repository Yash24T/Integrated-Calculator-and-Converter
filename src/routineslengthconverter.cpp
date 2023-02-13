#include "lengthconverter.h"

double LengthConverter::meter_to_meter(double m)
{
    return (m);
}

double LengthConverter::meter_to_kilometer(double m)
{
    return (m * 0.001);
}

double LengthConverter::meter_to_centimeter(double m)
{
    return (m * 100);
}

double LengthConverter::meter_to_millimeter(double m)
{
    return (m * 1000);
}

double LengthConverter::meter_to_micrometer(double m)
{
    return (m * 1000000);
}

double LengthConverter::meter_to_nanometer(double m)
{
    return (m * 1000000000);
}

double LengthConverter::meter_to_mile(double m)
{
    return (m * 0.0006213689);
}

double LengthConverter::meter_to_yard(double m)
{
    return (m * 1.0936132983);
}

double LengthConverter::meter_to_foot(double m)
{
    return (m * 3.280839895);
}

double LengthConverter::meter_to_inch(double m)
{
    return (m * 39.37007874);
}

double LengthConverter::meter_to_lightyear(double m)
{
    return (m * 1.057008707E-16);
}

double LengthConverter::kilometer_to_meter(double km)
{
    return (km / 0.001);
}

double LengthConverter::centimeter_to_meter(double cm)
{
    return (cm / 100);
}

double LengthConverter::millimeter_to_meter(double mm)
{
    return (mm / 1000);
}

double LengthConverter::micrometer_to_meter(double um)
{
    return (um / 1000000);
}

double LengthConverter::nanometer_to_meter(double nm)
{
    return (nm / 1000000000);
}

double LengthConverter::mile_to_meter(double mi)
{
    return (mi / 0.0006213689);
}

double LengthConverter::yard_to_meter(double y)
{
    return (y / 1.0936132983);
}

double LengthConverter::foot_to_meter(double f)
{
    return (f / 3.280839895);
}

double LengthConverter::inch_to_meter(double in)
{
    return (in / 39.37007874);
}

double LengthConverter::lightyear_to_meter(double ly)
{
    return (ly / 1.057008707E-16);
}

double LengthConverter::Convert(int from, int to, double m)
{
    if(from == METER)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(m));
            case KILOMETER:
                return(meter_to_kilometer(m));
            case CENTIMETER:
                return(meter_to_centimeter(m));
            case MILLIMETER:
                return(meter_to_millimeter(m));
            case MICROMETER:
                return(meter_to_micrometer(m));
            case NANOMETER:
                return(meter_to_nanometer(m));
            case MILE:
                return(meter_to_mile(m));
            case YARD:
                return(meter_to_yard(m));
            case FOOT:
                return(meter_to_foot(m));
            case INCH:
                return(meter_to_inch(m));
            case LIGHTYEAR:
                return(meter_to_lightyear(m));
            default:
                return(0.000);
        }
    }

    if(from == KILOMETER)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(kilometer_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(kilometer_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(kilometer_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(kilometer_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(kilometer_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(kilometer_to_meter(m)));
            case MILE:
                return(meter_to_mile(kilometer_to_meter(m)));
            case YARD:
                return(meter_to_yard(kilometer_to_meter(m)));
            case FOOT:
                return(meter_to_foot(kilometer_to_meter(m)));
            case INCH:
                return(meter_to_inch(kilometer_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(kilometer_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == CENTIMETER)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(centimeter_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(centimeter_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(centimeter_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(centimeter_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(centimeter_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(centimeter_to_meter(m)));
            case MILE:
                return(meter_to_mile(centimeter_to_meter(m)));
            case YARD:
                return(meter_to_yard(centimeter_to_meter(m)));
            case FOOT:
                return(meter_to_foot(centimeter_to_meter(m)));
            case INCH:
                return(meter_to_inch(centimeter_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(centimeter_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == MILLIMETER)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(millimeter_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(millimeter_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(millimeter_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(millimeter_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(millimeter_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(millimeter_to_meter(m)));
            case MILE:
                return(meter_to_mile(millimeter_to_meter(m)));
            case YARD:
                return(meter_to_yard(millimeter_to_meter(m)));
            case FOOT:
                return(meter_to_foot(millimeter_to_meter(m)));
            case INCH:
                return(meter_to_inch(millimeter_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(millimeter_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == MICROMETER)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(micrometer_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(micrometer_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(micrometer_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(micrometer_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(micrometer_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(micrometer_to_meter(m)));
            case MILE:
                return(meter_to_mile(micrometer_to_meter(m)));
            case YARD:
                return(meter_to_yard(micrometer_to_meter(m)));
            case FOOT:
                return(meter_to_foot(micrometer_to_meter(m)));
            case INCH:
                return(meter_to_inch(micrometer_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(micrometer_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == NANOMETER)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(nanometer_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(nanometer_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(nanometer_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(nanometer_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(nanometer_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(nanometer_to_meter(m)));
            case MILE:
                return(meter_to_mile(nanometer_to_meter(m)));
            case YARD:
                return(meter_to_yard(nanometer_to_meter(m)));
            case FOOT:
                return(meter_to_foot(nanometer_to_meter(m)));
            case INCH:
                return(meter_to_inch(nanometer_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(nanometer_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == MILE)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(mile_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(mile_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(mile_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(mile_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(mile_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(mile_to_meter(m)));
            case MILE:
                return(meter_to_mile(mile_to_meter(m)));
            case YARD:
                return(meter_to_yard(mile_to_meter(m)));
            case FOOT:
                return(meter_to_foot(mile_to_meter(m)));
            case INCH:
                return(meter_to_inch(mile_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(mile_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == YARD)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(yard_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(yard_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(yard_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(yard_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(yard_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(yard_to_meter(m)));
            case MILE:
                return(meter_to_mile(yard_to_meter(m)));
            case YARD:
                return(meter_to_yard(yard_to_meter(m)));
            case FOOT:
                return(meter_to_foot(yard_to_meter(m)));
            case INCH:
                return(meter_to_inch(yard_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(yard_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == FOOT)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(foot_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(foot_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(foot_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(foot_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(foot_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(foot_to_meter(m)));
            case MILE:
                return(meter_to_mile(foot_to_meter(m)));
            case YARD:
                return(meter_to_yard(foot_to_meter(m)));
            case FOOT:
                return(meter_to_foot(foot_to_meter(m)));
            case INCH:
                return(meter_to_inch(foot_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(foot_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == INCH)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(inch_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(inch_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(inch_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(inch_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(inch_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(inch_to_meter(m)));
            case MILE:
                return(meter_to_mile(inch_to_meter(m)));
            case YARD:
                return(meter_to_yard(inch_to_meter(m)));
            case FOOT:
                return(meter_to_foot(inch_to_meter(m)));
            case INCH:
                return(meter_to_inch(inch_to_meter(m)));
            case LIGHTYEAR:
                return(meter_to_lightyear(inch_to_meter(m)));
            default:
                return(0.000);
        }
    }

    if(from == LIGHTYEAR)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(lightyear_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(lightyear_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(lightyear_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(lightyear_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(lightyear_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(lightyear_to_meter(m)));
            case MILE:
                return(meter_to_mile(lightyear_to_meter(m)));
            case YARD:
                return(meter_to_yard(lightyear_to_meter(m)));
            case FOOT:
                return(meter_to_foot(lightyear_to_meter(m)));
            case INCH:
                return(meter_to_inch(lightyear_to_meter(m)));
            case LIGHTYEAR:
                return(m);
            default:
                return(0.000);
        }
    }

    if(from == LIGHTYEAR)
    {
        switch(to)
        {
            case METER:
                return(meter_to_meter(lightyear_to_meter(m)));
            case KILOMETER:
                return(meter_to_kilometer(lightyear_to_meter(m)));
            case CENTIMETER:
                return(meter_to_centimeter(lightyear_to_meter(m)));
            case MILLIMETER:
                return(meter_to_millimeter(lightyear_to_meter(m)));
            case MICROMETER:
                return(meter_to_micrometer(lightyear_to_meter(m)));
            case NANOMETER:
                return(meter_to_nanometer(lightyear_to_meter(m)));
            case MILE:
                return(meter_to_mile(lightyear_to_meter(m)));
            case YARD:
                return(meter_to_yard(lightyear_to_meter(m)));
            case FOOT:
                return(meter_to_foot(lightyear_to_meter(m)));
            case INCH:
                return(meter_to_inch(lightyear_to_meter(m)));
            case LIGHTYEAR:
                return(m);
            default:
                return(0.000);
        }
    }

    return (0.00);
}
