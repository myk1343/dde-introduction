#ifndef ICONBUTTON_H
#define ICONBUTTON_H

#include <DFloatingButton>
#include <QKeyEvent>

DWIDGET_USE_NAMESPACE

class IconButton : public DFloatingButton
{
public:
    IconButton(QWidget *parent = nullptr);

};

#endif // ICONBUTTON_H
