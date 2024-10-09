// clientinfo.h
#ifndef CLIENTINFO_H
#define CLIENTINFO_H

#include <QDataStream>

struct ClientInfo {
    int clientCount;  // Количество подключенных клиентов
};

QDataStream &operator<<(QDataStream &out, const ClientInfo &info) {
    out << info.clientCount;
    return out;
}

QDataStream &operator>>(QDataStream &in, ClientInfo &info) {
    in >> info.clientCount;
    return in;
}

#endif // CLIENTINFO_H
