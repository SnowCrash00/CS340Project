#ifndef PLANE_H
#define PLANE_H

#include <QPainter>
#include <QGraphicsItem>
#include <QtGui>;

class plane : public QGraphicsItem
{
private:
    qreal currentX;
    qreal currentY;

public:
    plane();

protected:
    QRectF boundingRect()const;
    void advance(int phase);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // PLANE_H
