# Miko Language

A Uni-Level Language, module, controllable，graceful and unified.

Now in the process of design and prototyping, please check [this repository (Chinese Only)](https://github.com/kgs233/MikoLangIdea "Miko Lang Idea") for progress.

## Grammar symbol define

Grammar marking method in code

### Notes

    # This is a note

### Define Grammar

    Grammar1 : ...
             | ...

### Citation grammar

    $Grammar1
    $Grammar2[note] # The syntax comments are enclosed in parentheses
    $(Grammar3)     # In parentheses is optional grammar

### Direct string

    "a direct string"
    "," ":"            # Please try to keep the string short or only one symbol
    "a"                # Dont use Single English letter

### Special symbols

    STR     # Any string
    NULL    # null string
