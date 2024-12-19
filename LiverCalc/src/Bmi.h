//
// Created by liu on 2024/12/19.
//

#ifndef BMI_H
#define BMI_H

#include <QWidget>
#include "../res/ui_bmi.h"


struct R {
    QString state;
    QString style;
};


QT_BEGIN_NAMESPACE
namespace Ui { class Bmi; }
QT_END_NAMESPACE

class Bmi : public QWidget {
Q_OBJECT

public:
    explicit Bmi(QWidget *parent = nullptr);
    ~Bmi() override;
public slots:
    void calc_bmi();
    void calc_arp();
    void calc_fib_4();
    void calc_ts();
    void log_bmi();

private :
    void initialize_ui();


    R define_bmi(float bmi);
private:
    Ui::BMI_Form *ui{};
float bmi = 0.0;
};


#endif //BMI_H
