#ifndef DOTHERSIDETYPES_H
#define DOTHERSIDETYPES_H

// Raw data types
typedef int*  IntPtr;
typedef char* CharPtr;
typedef const char* ConstCharPtr;
typedef void* QVariantVoidPtr;
typedef void* QModelIndexVoidPtr;
typedef void* QAbstractListModelVoidPtr;
typedef void* QQmlApplicationEngineVoidPtr;
typedef void* QQuickViewVoidPtr;
typedef void* QQmlContextVoidPtr;
typedef void* QHashIntQByteArrayVoidPtr;

// Raw function types
typedef void (*Function)(void*);
typedef void (*DObjectCallback)(void*, void*, int, void**);
typedef void (*RowCountCallback)(void* model, QModelIndexVoidPtr index, IntPtr result);
typedef void (*DataCallback)(void* model, QModelIndexVoidPtr index, int role, QVariantVoidPtr result);
typedef void (*RoleNamesCallback)(void* model, QHashIntQByteArrayVoidPtr result);

#endif