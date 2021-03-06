/*
    YUMRepoManager, a manager for the configuration files of YUM and his repositories.
    Copyright (C) 2011-2012  Josué V. Herrera

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "oldpackages.h"
#include "ui_oldpackages.h"

OldPackages::OldPackages(const QString &oldPackagesList, QWidget *parent) : QDialog(parent), ui(new Ui::OldPackages)
{

    ui->setupUi(this);

    ui->textEditOldPackages->setText(oldPackagesList);

}// Constructor

OldPackages::~OldPackages()
{

    delete ui;

}// Destructor

void OldPackages::on_buttonBox_accepted()
{

    this->accept();

}// on_buttonBox_accepted

void OldPackages::on_buttonBox_rejected()
{

    this->close();

}// on_buttonBox_rejected
