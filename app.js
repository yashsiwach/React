import React from "react";
import ReactDOM from "react-dom/client";
const heading = React.createElement(
    "h1",
    { id: "heading" },
    "hello ram ram"
);
const parent = React.createElement(
    "div",
    { id: "parent" },
    [React.createElement(
        "h1",
        { id: "child" },
        "hi child",
    ),
    React.createElement(
        "h2",
        { id: "child" },
        "hi2 child",
    )]

)
console.log(parent);
const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(parent);