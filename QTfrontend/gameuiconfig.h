/*
 * Hedgewars, a worms-like game
 * Copyright (c) 2006 Andrey Korotaev <unC0Rr@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef GAMECONFIG_H
#define GAMECONFIG_H

#include <QSettings>
#include <QDir>
#include <QStringList>

class HWForm;
class QSettings;

class GameUIConfig : public QSettings
{
	Q_OBJECT

public:
	GameUIConfig(HWForm * FormWidgets, const QString & fileName);
	QStringList GetTeamsList();
	int vid_Resolution();
	bool vid_Fullscreen();
	bool isSoundEnabled();
	bool isShowFPSEnabled();
	quint8 timerInterval();
	QString GetRandomTheme();

private slots:

public slots:
	void SaveOptions();

private:
	HWForm * Form;
	QStringList Themes;
};

#endif
