SYSTEMAKER BOOTSTRAP THEME for Drupal
A bootstrap sub-theme ready-to-use with bootswatch skins for Drupal.

To use another bootswatch skins follow this instructions : 

- Download their less files (variables.less and bootswatch.less) at https://bootswatch.com/
- Put them in "less" folder.
- Edit the file variables.less to rename the icon path like this : 
  the @icon-font-path:          "../bootstrap/fonts/";
- At last compile those less files ; for example withe node.js
      -- install less in node : npm install -g less 
      -- Go in your theme folder  and type : lessc less/style.less css/style.css


To help consolidate and remove possible future inconsistencies, the
documentation for this sub-theme starter kit has been moved to:
http://drupal.org/node/1978010.
