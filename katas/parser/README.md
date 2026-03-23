# Parser

## Example

Input:

```txt
S > aSa - S > bSb - S > c - S > $
```

Output:

```bash
G = ({S}, {a,b,c}, P, S)
P = {S -> aSa, S -> bSb, S -> c, S -> $}
Correct
```

Input:

```txt
S > aSa - S > bSb - S > c - A > $
```

Output:

```bash
Error: Poorly formatted production rules
Incorrect
```
