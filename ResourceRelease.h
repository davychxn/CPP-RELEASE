// Creator: Davy (Davy) Chen
// Time: July 29th, 2024
// Email: cndv3996@163.com

#ifndef RESOURCE_RELEASE_H
#define RESOURCE_RELEASE_H

template <typename T>
class ResourceRelease
{
public:
    static void release(T& resource);
    static void releaseArr(T& resource);
};

template <typename T>
void ResourceRelease<T>::release(T& resource)
{
    if (resource)
    {
        delete resource;
        resource = nullptr;
    }
}

template <typename T>
void ResourceRelease<T>::releaseArr(T& resource)
{
    if (resource)
    {
        delete [] resource;
        resource = nullptr;
    }
}

#endif // RESOURCE_RELEASE_H
