# C++ Fundamental Types Reference
### Size measured in bytes

| Type               | 32-bit Windows | 32-bit Linux/macOS/BSD | 64-bit Windows | 64-bit Linux/macOS/BSD | Printf Format Specifier |
|:-------------------|:--------------:|:----------------------:|:--------------:|:----------------------:|------------------------:|
| short              |       2        |           2            |       2        |           2            |                     %hd |
| unsigned short     |       2        |           2            |       2        |           2            |                     %hu |
| int                |       4        |           4            |       4        |           4            |                      %d |
| unsigned int       |       4        |           4            |       4        |           4            |                      %u |
| long               |       4        |           4            |       4        |           8            |                     %ld |
| unsigned long      |       4        |           4            |       4        |           8            |                     %lu |
| long long          |       8        |           8            |       8        |           8            |                    %lld |
| unsigned long long |       8        |           8            |       8        |           8            |                    %llu |
| float              |       4        |           4            |       4        |           4            |                      %g |
| double             |       8        |           8            |       8        |           8            |                     %lg |
| long double        |       8        |           8            |       8        |           16           |                     %Lg |
| char               |       1        |           1            |       1        |           1            |                      %c |
| char*              |       1        |           1            |       1        |           1            |                      %s |
| wchar_t            |       2        |           2            |       2        |           4            |                     %lc |
| wchar_t*           |       2        |           2            |       2        |           4            |                     %ls |
| size_t             |       4        |           4            |       8        |           8            |                     %zd |
| ptr*               |       4        |           4            |       8        |           8            |                      %p |