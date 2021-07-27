//
// Created by Marcus on 7/26/2021.
//

#ifndef READING_BOOKS_STRINGUTIL_H
#define READING_BOOKS_STRINGUTIL_H

namespace StringUtils
{
    string GetCommandLineArg( int inIndex );

    string Sprintf( const char* inFormat, ... );

    void	Log( const char* inFormat );
    void	Log( const char* inFormat, ... );
}

#define LOG( ... ) StringUtils::Log( __VA_ARGS__ );

#endif //READING_BOOKS_STRINGUTIL_H
