## Review for: Derek Zhou
## Reviewed by: Kevin Lin
- Needs test cases
- rmindent feels unneccessary
- Weird indenting in the code
- No one function to format an entire file
- Running indent on multiple files in succession causes errors due to static indent counter
- main does not work (unindents but does not reindent the unindented lines)
    - Fix by first unindenting all lines then re-reading the lines and reindenting
- No comments