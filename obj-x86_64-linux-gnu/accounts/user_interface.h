/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p user_interface /root/Downloads/cutefish/libcutefish/accounts/org.freedesktop.Accounts.User.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.Accounts.User
 */
class OrgFreedesktopAccountsUserInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.Accounts.User"; }

public:
    OrgFreedesktopAccountsUserInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopAccountsUserInterface();

    Q_PROPERTY(int AccountType READ accountType)
    inline int accountType() const
    { return qvariant_cast< int >(property("AccountType")); }

    Q_PROPERTY(bool AutomaticLogin READ automaticLogin)
    inline bool automaticLogin() const
    { return qvariant_cast< bool >(property("AutomaticLogin")); }

    Q_PROPERTY(QString Email READ email)
    inline QString email() const
    { return qvariant_cast< QString >(property("Email")); }

    Q_PROPERTY(QString HomeDirectory READ homeDirectory)
    inline QString homeDirectory() const
    { return qvariant_cast< QString >(property("HomeDirectory")); }

    Q_PROPERTY(QString IconFile READ iconFile)
    inline QString iconFile() const
    { return qvariant_cast< QString >(property("IconFile")); }

    Q_PROPERTY(QString Language READ language)
    inline QString language() const
    { return qvariant_cast< QString >(property("Language")); }

    Q_PROPERTY(bool LocalAccount READ localAccount)
    inline bool localAccount() const
    { return qvariant_cast< bool >(property("LocalAccount")); }

    Q_PROPERTY(QString Location READ location)
    inline QString location() const
    { return qvariant_cast< QString >(property("Location")); }

    Q_PROPERTY(bool Locked READ locked)
    inline bool locked() const
    { return qvariant_cast< bool >(property("Locked")); }

    Q_PROPERTY(qulonglong LoginFrequency READ loginFrequency)
    inline qulonglong loginFrequency() const
    { return qvariant_cast< qulonglong >(property("LoginFrequency")); }

    Q_PROPERTY(qlonglong LoginTime READ loginTime)
    inline qlonglong loginTime() const
    { return qvariant_cast< qlonglong >(property("LoginTime")); }

    Q_PROPERTY(QString PasswordHint READ passwordHint)
    inline QString passwordHint() const
    { return qvariant_cast< QString >(property("PasswordHint")); }

    Q_PROPERTY(int PasswordMode READ passwordMode)
    inline int passwordMode() const
    { return qvariant_cast< int >(property("PasswordMode")); }

    Q_PROPERTY(QString RealName READ realName)
    inline QString realName() const
    { return qvariant_cast< QString >(property("RealName")); }

    Q_PROPERTY(QString Shell READ shell)
    inline QString shell() const
    { return qvariant_cast< QString >(property("Shell")); }

    Q_PROPERTY(bool SystemAccount READ systemAccount)
    inline bool systemAccount() const
    { return qvariant_cast< bool >(property("SystemAccount")); }

    Q_PROPERTY(qulonglong Uid READ uid)
    inline qulonglong uid() const
    { return qvariant_cast< qulonglong >(property("Uid")); }

    Q_PROPERTY(QString UserName READ userName)
    inline QString userName() const
    { return qvariant_cast< QString >(property("UserName")); }

    Q_PROPERTY(QString XSession READ xSession)
    inline QString xSession() const
    { return qvariant_cast< QString >(property("XSession")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> SetAccountType(int accountType)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(accountType);
        return asyncCallWithArgumentList(QStringLiteral("SetAccountType"), argumentList);
    }

    inline QDBusPendingReply<> SetAutomaticLogin(bool enabled)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(enabled);
        return asyncCallWithArgumentList(QStringLiteral("SetAutomaticLogin"), argumentList);
    }

    inline QDBusPendingReply<> SetEmail(const QString &email)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(email);
        return asyncCallWithArgumentList(QStringLiteral("SetEmail"), argumentList);
    }

    inline QDBusPendingReply<> SetHomeDirectory(const QString &homedir)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(homedir);
        return asyncCallWithArgumentList(QStringLiteral("SetHomeDirectory"), argumentList);
    }

    inline QDBusPendingReply<> SetIconFile(const QString &filename)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filename);
        return asyncCallWithArgumentList(QStringLiteral("SetIconFile"), argumentList);
    }

    inline QDBusPendingReply<> SetLanguage(const QString &language)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(language);
        return asyncCallWithArgumentList(QStringLiteral("SetLanguage"), argumentList);
    }

    inline QDBusPendingReply<> SetLocation(const QString &location)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(location);
        return asyncCallWithArgumentList(QStringLiteral("SetLocation"), argumentList);
    }

    inline QDBusPendingReply<> SetLocked(bool locked)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(locked);
        return asyncCallWithArgumentList(QStringLiteral("SetLocked"), argumentList);
    }

    inline QDBusPendingReply<> SetPassword(const QString &password, const QString &hint)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(password) << QVariant::fromValue(hint);
        return asyncCallWithArgumentList(QStringLiteral("SetPassword"), argumentList);
    }

    inline QDBusPendingReply<> SetPasswordHint(const QString &hint)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(hint);
        return asyncCallWithArgumentList(QStringLiteral("SetPasswordHint"), argumentList);
    }

    inline QDBusPendingReply<> SetPasswordMode(int mode)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(mode);
        return asyncCallWithArgumentList(QStringLiteral("SetPasswordMode"), argumentList);
    }

    inline QDBusPendingReply<> SetRealName(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name);
        return asyncCallWithArgumentList(QStringLiteral("SetRealName"), argumentList);
    }

    inline QDBusPendingReply<> SetShell(const QString &shell)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(shell);
        return asyncCallWithArgumentList(QStringLiteral("SetShell"), argumentList);
    }

    inline QDBusPendingReply<> SetUserName(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name);
        return asyncCallWithArgumentList(QStringLiteral("SetUserName"), argumentList);
    }

    inline QDBusPendingReply<> SetXSession(const QString &x_session)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(x_session);
        return asyncCallWithArgumentList(QStringLiteral("SetXSession"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Changed();
};

namespace org {
  namespace freedesktop {
    namespace Accounts {
      typedef ::OrgFreedesktopAccountsUserInterface User;
    }
  }
}
#endif
