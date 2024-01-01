#!/usr/bin/env python

env = Environment(tools=['mingw'], SCONS_CXX_STANDARD='c++20')

# Build parameters
env.Append( CPPPATH=[
        '..\\src',
        '..\\libs\\includes'
] )

env.Append( CPPDEFINES=['WINDOWS'] )
env.Append( LIBPATH=['..\\libs'] )
env.Append( LIBS=[
    'glfw3',
    'opengl32',
    'User32',
    'Gdi32',
    'Shell32'
] )

ccflags = []

debug = ARGUMENTS.get('debug', 0)
if int(debug):
    ccflags.append('-g')

env.Append( CCFLAGS=ccflags)

Export("env")

SConscript('src/SConscript', variant_dir='build', duplicate=0)
