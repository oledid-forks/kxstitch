/*
 * Copyright (C) 2009-2015 by Stephen Allewell
 * steve.allewell@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */


#ifndef LibraryTreeWidget_H
#define LibraryTreeWidget_H


#include <QTreeWidget>


class QDragEnterEvent;
class QDragLeaveEvent;
class QDrawMoveEvent;
class QDropEvent;
class QString;
class QTimer;
class QTreeWidgetItem;
class QWidget;


class LibraryTreeWidget : public QTreeWidget
{
    Q_OBJECT

public:
    explicit LibraryTreeWidget(QWidget *parent);

protected:
    virtual void contentsDragEnterEvent(QDragEnterEvent *event);
    virtual void contentsDragMoveEvent(QDragMoveEvent *event);
    virtual void contentsDragLeaveEvent(QDragLeaveEvent *event);
    virtual void contentsDropEvent(QDropEvent *event);
    virtual bool acceptDrag(QDropEvent *event) const;

private slots:
    void openBranch();

private:
    QTreeWidgetItem *m_dropItem;
    QTreeWidgetItem *m_currentItem;
    QTimer          *m_openBranchTimer;
};


#endif // LibraryTreeWidget_H
