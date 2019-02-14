/*
    YumRepoManager is a manager for the repository configuration files of YUM.
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

#ifndef OLDPACKAGES_H
#define OLDPACKAGES_H

#include <QDialog>
#include <QStringListModel>

namespace Ui {
    class OldPackages;
}

class OldPackages : public QDialog
{

    Q_OBJECT

public:

    explicit OldPackages(const QString &oldPackagesList, QWidget *parent = 0);

    ~OldPackages();

private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:

    Ui::OldPackages *ui;

};

#endif // OLDPACKAGES_H
