# Convenient C++ Resource Release Helper

Need to release used memory resource repeatedly like this?
```cpp
Vancouver* city = new Vancouver;

// Some usage
// ...

if (city)
{
    delete city;
    city = nullptr;
}
```

With CPP-RELEASE helper, it can be as elegant as this:
```cpp
ResourceRelease<Vancouver*>::release(city);
```

Compile 'Demo.cpp', give it a try. And use the code in your project today!
