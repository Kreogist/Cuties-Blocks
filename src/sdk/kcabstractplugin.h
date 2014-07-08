#ifndef KCABSTRACTPLUGIN_H
#define KCABSTRACTPLUGIN_H

#include <QStringList>

#include <QObject>

class KCAbstractPlugin : public QObject
{
    Q_OBJECT
public:
    explicit KCAbstractPlugin(QObject *parent = 0);
    virtual QString name()=0;
    virtual QString version()=0;
    virtual QString type()=0;
    virtual QStringList depends()=0;
    virtual void init()=0;
    virtual void stop()=0;

signals:

public slots:

private:
};

#endif  //KCABSTRACTPLUGIN_H
