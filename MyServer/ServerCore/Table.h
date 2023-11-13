#pragma once
#include "Singleton.h"

template <typename Type, typename TKey, typename TValue>
class Table : public Singleton<Type>
{
public:
    Table() { _table = new std::unordered_map<TKey, TValue>(); }
    ~Table() { delete _table; }
    
protected:
    std::unordered_map<TKey, TValue>* _table;

public:
    void Insert(TKey key, TValue value)
    {
        _table->insert(std::make_pair(key, value));
    }

    void Remove(TKey key)
    {
        auto value = _table->find(key);
        if (value == _table->end())
            return;

        value->second = nullptr;
        _table->erase(key);
    }

    const TValue Find(TKey key)
    {
        auto value = _table->find(key);
        if (value == _table->end())
            return nullptr;

        return value->second;
    }

    void Clear() { _table->clear(); }
    long Size() { return _table->size(); }
};