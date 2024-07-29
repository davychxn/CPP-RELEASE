# Convenient C++ Resource Release Helper

Need to release used memory resource repeatedly like this?
```cpp
Vancouver* city = new Vancouver;
Guangzhou* cities = new Guangzhou[5];

// Some usage
// ...

if (city)
{
    delete city;
    city = nullptr;
}

if (cities)
{
    delete [] cities;
    cities = nullptr;
}
```

With CPP-RELEASE helper, it can be as elegant as this:
```cpp
ResourceRelease<Vancouver*>::release(city);
// And
ResourceRelease<Guangzhou*>::releaseArr(cities);
```

Compile 'Demo.cpp', give it a try. And use the code in your project today!
