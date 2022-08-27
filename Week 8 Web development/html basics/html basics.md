# HTML programming

Today, you will learn HTML, which stands for HyperText markup language. HTML is used to describe how websites look.

Let's create a basic HTML page. Type this into an editor and save as a `.html` file. To view the page, open the file with your browser.

```html
<!DOCTYPE html>
<html>
  <body>
    <h1>This is my title</h1>
    <p>This is my paragraph</p>
  </body>
</html>
```

Things to know:

- The first line tells the computer that this is an HTML5 document
- <x> is an opening tag, </x> is a closing tag
- Everything is between `<html>` tags
- The body (content) of the html page goes between the `<body>` tags
- `<h1>` is for heading 1
- `p` is for paragraph

## Headings

HTML defines the headings h1 through h6:

# h1
## h2
### h3
#### h4
##### h5
###### h6

## Links

To create a link in HTML, use the `<a>` tag. Use the `href` attribute to link to a page.

```html
<a href="example.com">Link to example page</a>
```

[Link to example page](example.com)

## Images

Images have the `src` attribute for the image location, and the `alt` attribute for screenreaders. You can also add the `width` and `height` attributes to specify the width and height.

```html
<img src="website.com/image.jpg" alt="my image"/>
```

## Adding title to your page

Do you want to add a title to your tab? If so, add a `<head>` and a `<title>` tag.

```html
<!DOCTYPE html>
<html>
  <head>
    <title>This is the title on my tab</title>
  </head>
  <body>
    <h1>This is my title</h1>
    <p>This is my paragraph</p>
  </body>
</html>
```

## Tables

Want to make a table like this?

<table>
  <tr>
    <td>Name</td>
    <td>Age</td>
  </tr>
  <tr>
    <td>Bob</td>
    <td rowspan="2">40</td>
  </tr>
  <tr>
    <td>Joe</td>
  </tr>
  <tr>
    <td>Jill</td>
    <td>49</td>
  </tr>
</table>

```html
<table>
  <tr>
    <td>Name</td>
    <td>Age</td>
  </tr>
  <tr>
    <td>Bob</td>
    <td rowspan="2">40</td>
  </tr>
  <tr>
    <td>Joe</td>
  </tr>
  <tr>
    <td>Jill</td>
    <td>49</td>
  </tr>
</table>
```

## Lists

To create an unordered list, use the `<ul>` tag

```html
<ul>
  <li>Eggs</li>
  <li>Bacon</li>
  <li>Ham</li>
</ul>
```

<ul>
  <li>Eggs</li>
  <li>Bacon</li>
  <li>Ham</li>
</ul>


To create an ordered list, use the `<ol>` tag

```html
<ol>
  <li>First Thing</li>
  <li>Second Thing</li>
  <li>Third Thing</li>
</ol>
```

<ol>
  <li>First Thing</li>
  <li>Second Thing</li>
  <li>Third Thing</li>
</ol>
