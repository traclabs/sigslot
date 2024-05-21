#pragma once
#include <memory>
#include <memory>

/**
 * Bring ADL conversion for boost smart pointers
 */

namespace boost {

template <typename T>
weak_ptr<T> to_weak(shared_ptr<T> p) {
    return {p};
}

template <typename T>
weak_ptr<T> to_weak(weak_ptr<T> p) {
    return p;
}

} // namespace boost

