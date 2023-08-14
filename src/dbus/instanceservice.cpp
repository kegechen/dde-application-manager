// SPDX-FileCopyrightText: 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "dbus/instanceservice.h"

InstanceService::InstanceService(QString instanceId, QString application, QString systemdUnitPath)
    : m_instanceId(std::move(instanceId))
    , m_Application(std::move(application))
    , m_SystemdUnitPath(std::move(systemdUnitPath))
{
}

InstanceService::~InstanceService() = default;

QDBusObjectPath InstanceService::application() const
{
    return m_Application;
}

QDBusObjectPath InstanceService::systemdUnitPath() const
{
    return m_SystemdUnitPath;
}