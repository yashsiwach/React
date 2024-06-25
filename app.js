import React from "react";
import ReactDOM from "react-dom/client";
//react element
const heading = React.createElement(
    "h1",
    { id: "heading" },
    "hello ram ram"
);
console.log(heading);

const jsx = (
    <h1 id="test" className="ok">
        hello from jsx
    </h1>
);
// react components -> functional components
const Functional = () => {
    return (
        <div id="container">
            <h1>hello from jaat</h1>
        </div>
    );
};

const test = 199;

const Big = () => {
    return (
        <div id="container">
            {/* work as a function ,component in component is component composition */}
            <Functional />
            {Functional()}
            {test + 100}
            {console.log("print ook")}
            {/* {//element inside component  */}

            {jsx}
            <h1>hello from jaat</h1>
        </div>
    );
};

const Functional2 = () => <h1>hello from jaat</h1>;

console.log(Functional());
const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<Big />);

