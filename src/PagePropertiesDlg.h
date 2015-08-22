/*
 * Copyright (C) 2010-2014 by Stephen Allewell
 * steve.allewell@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */


#ifndef PagePropertiesDlg_H
#define PagePropertiesDlg_H


#include <QDialog>

#include "ui_PageProperties.h"


class PagePreviewListWidgetItem;


class PagePropertiesDlg : public QDialog
{
    Q_OBJECT

public:
    PagePropertiesDlg(QWidget *, const QMargins &, bool, int);
    ~PagePropertiesDlg();

    QMargins margins() const;
    bool showGrid() const;
    int gridSize() const;

private slots:
    void on_DialogButtonBox_accepted();
    void on_DialogButtonBox_rejected();
    void on_DialogButtonBox_helpRequested();

private:
    Ui::PageProperties  ui;
};


#endif // PagePropertiesDlg_H
