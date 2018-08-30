#include "widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    m_glWidget = new GLWidget;

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(m_glWidget);
    this->setLayout(layout);

}

Widget::~Widget()
{

}
