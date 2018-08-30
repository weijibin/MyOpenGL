#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "glwidget.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    GLWidget * m_glWidget = nullptr;
};

#endif // WIDGET_H
