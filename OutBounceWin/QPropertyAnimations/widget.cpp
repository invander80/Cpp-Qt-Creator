#include "widget.h"
#include "ui_widget.h"
#include <QPropertyAnimation>
#include <QGraphicsDropShadowEffect>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    set_shadow(ui->win, "#00ffff", 30);
    set_shadow(ui->welcomeLbl, "#00ffff", 30);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_expandBtn_clicked()
{
    QPropertyAnimation *_animate = new QPropertyAnimation(ui->optionBar, "minimumWidth");
    _animate->setDuration(1000);
    _animate->setEasingCurve(QEasingCurve::OutBounce);

    if (ui->expandBtn->isChecked())
    {
        _animate->setEndValue(250);
        _animate->start();
    }
    else
    {
        _animate->setEndValue(0);
        _animate->start();
    }
}

void Widget::set_shadow(QWidget *widget, QColor color, int radius)
{
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(widget);
    shadow->setBlurRadius(radius);
    shadow->setXOffset(0);
    shadow->setYOffset(0);
    shadow->setColor(QColor(color));
    widget->setGraphicsEffect(shadow);
}

