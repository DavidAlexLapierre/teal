#!/usr/bin/env python

env = Environment(tools=['mingw'], SCONS_CXX_STANDARD='c++20')

# Options

AddOption('--release', dest='release', action='store_true')

# Build parameters
env.Append( CPPPATH=[
        env.Dir('src'),
        env.Dir('libs\\includes')
] )

env.Append( CPPDEFINES=['WINDOWS'] )
env.Append( LIBPATH=[env.Dir('libs')] )
env.Append( LIBS=[
    'glfw3',
    'opengl32',
    'User32',
    'Gdi32',
    'Shell32'
] )

ccflags = []

if not GetOption('release'):
    ccflags.append('-g')

env.Append( CCFLAGS=ccflags)

Export("env")

outDir = 'debug'
if GetOption('release'):
    outDir = 'release'

SConscript('src/SConscript', variant_dir='build/'+outDir, duplicate=0)
