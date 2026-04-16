# LeetCode 217: Contains Duplicate

**Ссылка на задачу:** [LeetCode 217](https://leetcode.com/problems/contains-duplicate/)

## Problem Description
Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

## Сравнение подходов

| Подход | Time | Memory | When to use |
|--------|-------|--------|-------------------|
| Brute Force | O(n²) | O(1) | ❌ Только для обучения |
| Сортировка | O(n log n) | O(1) | Когда память критична |
| Hash Set/Map | **O(n)** | O(n) | ✓ Стандартное решение |
| Bubble Sort модифицированный | O(n²) | O(1) | Частично упорядоченные данные (***O(n) - лучший случай***) |

## Рекомендация
- **Для собеседований:** Hash Set/Table (O(n)) — оптимален по времени
- **Для специальных случаев:** Модифицированный bubble sort на хороших данных

## Реализация
Реализации всех подходов находятся в проекте:

***problems/0201-0300/0217_ContainsDuplicate/README.md***


## Conclusion
The most `efficient` solution ***in terms of time complexity*** is the HashSet approach, which allows us to solve the problem with linear time complexity and linear space complexity.
