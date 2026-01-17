# Resistors are not just resistors (first realization)

This is not a tutorial.
This is me documenting a moment where something finally clicked.

I was thinking about resistors, specifically metal oxide / metal film ones.
They have that cylindrical body, and I remembered that the resistance value is set by
cutting a spiral path in the resistive film.

Then I stopped and thought:

If current is literally flowing in a spiral,
isn’t that… an inductor?

That question bothered me more than it should have.

---

## The "wait, what?" moment

A spiral path means:
- current loops
- magnetic field
- inductance

So a resistor **must** have inductance.
Not ideally. But physically.

That immediately broke the clean mental separation of:
- resistor = R
- inductor = L

Because clearly, in real life, they are not isolated.

---

## Then it got worse (or better)

Once I accepted inductance, another question popped up:

If there are adjacent spiral turns separated by insulation,
doesn’t that form capacitance too?

Answer: yes.
So now the resistor has:
- resistance (dominant)
- parasitic inductance
- parasitic capacitance

So a real resistor is more like a tiny RLC network.

---

## Why this didn’t show up earlier

At low frequency / DC:
- inductive reactance is tiny
- capacitive reactance is huge
So everything collapses nicely into "just R".

But that’s not because L and C don’t exist.
It’s because they don’t matter *yet*.

That distinction feels important and slightly annoying that it’s not stated clearly in courses.

---

## Current understanding (still evolving)

- Every component is a model, not a perfect object
- Components are named by what dominates in a given frequency range
- Saying “inductor with resistance” or “resistor with inductance” is a modeling choice

This is obvious in hindsight.
It was not obvious when I first learned R, L, and C separately.

---

## Why I’m writing this

I don’t want to forget *how* I realized this.
Not the final explanation, but the confusion that led to it.

Future me:
If a circuit behaves weirdly at high frequency,
remember this page before blaming the power supply.

That’s all.
