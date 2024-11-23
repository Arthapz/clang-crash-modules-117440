import std;
import DynamicLoader;

auto main() -> int { 
    auto foo_so = stormkit::DynamicLoader::load("foo.so");
    return 0; 
}
