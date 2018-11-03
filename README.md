# Reason bindings for Material-UI-Icons

[![npm](https://img.shields.io/npm/v/@mscharley/bs-material-ui-icons.svg)](https://www.npmjs.com/package/@mscharley/bs-material-ui-icons)

[Reason](https://reasonml.github.io/) bindings for [material-ui-icons](https://github.com/callemall/material-ui).

## Status

🚧 This is a WIP, not everything is supported yet. 🚧

Feel free to create an issue or PR if you find anything missing.

## Installation

```
yarn add @mscharley/bs-material-ui-icons
yarn add @material-ui/core
yarn add @material-ui/icons
```

Then add `@mscharley/bs-material-ui-icons` to `bs-dependencies` in your `bsconfig.json`:

```json
{
  // ...
  "bs-dependencies": ["@mscharley/bs-material-ui-icons"]
}
```

## Usage

```reason
let component = ReasonReact.statelessComponent("Example");

let make = (_children) => {
  ...component,
  render: (_self) => <MscharleyBsMaterialUiIcons.Delete.Filled />
};
```

## Design decisions

### AKA. Why does this module take so long to build?

There are an awful lot of icons in available in `@material-ui/icons`. As of writing, roughly 5000 of them. Initially, this project exported all of these icons from one module file. This was very fast to build! However due to interactions with the way the `bsb` builds files and the way it writes imports this led to very big deployment packages, even with tree shaking. Using a single icon caused builds to jump up 3MB because all the icons were always being included.

This module now exports each group of icons into it's own file. This leads to a slightly different usage pattern to ReactJS, namely `<Delete.Filled />` instead of `<DeleteFilled />`. This isn't that big a deal, really. It also lets packagers only include the icons you're using. Unfortunately, it means that the BSB build is a little bit longer.
