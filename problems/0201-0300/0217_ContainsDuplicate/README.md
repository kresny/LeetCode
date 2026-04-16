# LeetCode 217: Contains Duplicate

## Problem Description
Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

## Approaches to Solve the Problem

### 1. Brute Force Approach
- **Time Complexity**: O(n^2)
- **Space Complexity**: O(1)
- **Description**: Iterate through each element and compare it with all other elements. The worst-case time complexity is quadratic, which is not efficient for large datasets.

### 2. Sorting Approach
- **Time Complexity**: O(n log n)
- **Space Complexity**: O(1) or O(n) depending on the sorting algorithm used.
- **Description**: Sort the array and then check for adjacent elements that are the same. This can be done in linearithmic time for most efficient sorting algorithms.

### 3. HashSet Approach
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)
- **Description**: Use a HashSet to track the elements we've seen so far. As we iterate through the array, if we find an element already in the HashSet, we return true. Otherwise, we add it to the HashSet.

### 4. HashMap Approach (Count Occurrences)
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)
- **Description**: Use a HashMap to count the occurrences of each number. If any number appears more than once, return true.

### 5. **Модифицированный Bubble Sort** (O(n) - лучший случай, O(n²) - средний/худший случай)
**Алгоритм (оптимальный для частично упорядооченных данных):**
- На каждом проходе сравниваем соседние элементы на **равенство**
- Если элементы равны → дубликат найден, выход
- Одновременно выполняем bubble sort: если соседи не в порядке, меняем их местами
- После каждого прохода проверяем флаг перестановок
- Если перестановок не было → массив упорядочен и дубликатов нет

**Преимущества:**
- Выход сразу при обнаружении дубликата
- Для частично упорядоченных/хороших данных близко к O(n)
- Дополнительная память не требуется

## Сравнение подходов

| Подход | Time | Memory | When to use |
|--------|-------|--------|-------------------|
| Brute Force | O(n²) | O(1) | ❌ Только для обучения |
| Сортировка | O(n log n) | O(1) | Когда память критична |
| Hash Set/Map | **O(n)** | O(n) | ✓ Стандартное решение |
| Bubble Sort модифицированный | ***O(n) - лучший случай*** | O(1) | Частично упорядоченные данные |

## Рекомендация
- **Для собеседований:** Hash Set/Table (O(n)) — оптимален по времени
- **Для специальных случаев:** Модифицированный bubble sort на хороших данных

## Conclusion
The most `efficient` solution ***in terms of time complexity*** is the HashSet approach, which allows us to solve the problem with linear time complexity and linear space complexity.
