# React Notes

## Directory Structure

- node_modules: contains all the installed JavaScript libraries for this project
    - React: The javascript framework we will use to build our web apps
    - Babel: compiles jsx (javascript with extensions) into javascript
    - Webpack: takes all the files inside src and puts them into one file
- Public: Files that are static (not transformed by webpack)
    - index.html: Your html page (that loads react)
- src: Files that are bundled using webpack
    - index.js: The main javascript file, which loads react
    - App.js: The entry point of your react app
    - App.css: styles loaded by App.js
    - App.test.js: Contains tests such as asserting whether an element is shown
- package.json: Describes which libraries to include and the run scripts
