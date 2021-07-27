//
// Created by Marcus on 7/26/2021.
//

#ifndef READING_BOOKS_SOCKETADDRESSFACTORY_H
#define READING_BOOKS_SOCKETADDRESSFACTORY_H

class SocketAddressFactory
{
public:

    static SocketAddressPtr CreateIPv4FromString( const string& inString );
    static SocketAddressPtr CreateIPv6FromString( const string& inString );
};

#endif //READING_BOOKS_SOCKETADDRESSFACTORY_H
