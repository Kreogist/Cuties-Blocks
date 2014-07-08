#ifndef KCPLUGINMANAGER_H
#define KCPLUGINMANAGER_H

#include "kcabstractplugin.h"

#include <QObject>

class KCPluginManager : public QObject
{
    Q_OBJECT
public:
    explicit KCPluginManager(QObject *parent = 0);

signals:

public slots:

private:
    void addPlugin(KCAbstractPlugin *plugin);
//    QVector<KCAbstractPlugin *> ;
};

#endif  //KCPLUGINMANAGER_H
